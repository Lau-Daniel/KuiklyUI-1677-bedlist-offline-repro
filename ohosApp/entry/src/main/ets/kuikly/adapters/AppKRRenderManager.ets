import { KuiklyRenderAdapterManager } from '@kuikly-open/render';
import { AppKRLogAdapter } from './AppKRLogAdapter';

/** Installs only the logging adapter required by the standalone page. */
export class AppKRRenderManager {
  private static instance: AppKRRenderManager;
  private didInit: boolean = false;

  private constructor() {
  }

  static getInstance(): AppKRRenderManager {
    if (!AppKRRenderManager.instance) {
      AppKRRenderManager.instance = new AppKRRenderManager();
    }
    return AppKRRenderManager.instance;
  }

  initIfNeed(): void {
    if (this.didInit) {
      return;
    }
    this.didInit = true;
    KuiklyRenderAdapterManager.krLogAdapter = new AppKRLogAdapter();
  }
}
