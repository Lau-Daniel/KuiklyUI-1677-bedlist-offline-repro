import { KRNativeRenderController, Kuikly } from '@kuikly-open/render';
import { hilog } from '@kit.PerformanceAnalysisKit';
import globalNativeManager from '../kuikly/MyNativeManager';
import { KuiklyViewDelegate } from '../kuikly/KuiklyViewDelegate';
import { AppKRRenderManager } from '../kuikly/adapters/AppKRRenderManager';

const REPRO_PAGE_NAME = 'BedListOfflineRepro';

@Entry
@Component
struct Index {
  private kuiklyViewDelegate = new KuiklyViewDelegate();
  private kuiklyController: KRNativeRenderController | null = null;

  aboutToAppear(): void {
    AppKRRenderManager.getInstance().initIfNeed();
  }

  onPageShow(): void {
    this.kuiklyViewDelegate.pageDidAppear();
  }

  onPageHide(): void {
    this.kuiklyViewDelegate.pageDidDisappear();
  }

  onBackPress(): boolean | void {
    return this.kuiklyController?.onBackPress();
  }

  build() {
    Stack() {
      Kuikly({
        pageName: REPRO_PAGE_NAME,
        pageData: {},
        delegate: this.kuiklyViewDelegate,
        onControllerReadyCallback: (controller) => {
          this.kuiklyController = controller;
          controller.registerExceptionCallback((_executeMode, stack) => {
            hilog.error(0x0000, 'Kuikly1677', '%{public}s', stack);
          });
        },
        nativeManager: globalNativeManager,
      });
    }
    .width('100%')
    .height('100%')
    .backgroundColor(Color.White);
  }
}
