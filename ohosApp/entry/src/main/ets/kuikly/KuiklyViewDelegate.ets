/*
 * Minimal OpenHarmony delegate for the standalone KuiklyUI #1677 page.
 * The reproducer has no custom native views, modules, or business effects.
 */

import {
  IKuiklyViewDelegate,
  KRRenderModuleExportCreator,
  KRRenderViewExportCreator,
} from '@kuikly-open/render';

export class KuiklyViewDelegate extends IKuiklyViewDelegate {
  getCustomRenderViewCreatorRegisterMap(): Map<string, KRRenderViewExportCreator> {
    return new Map();
  }

  getCustomRenderModuleCreatorRegisterMap(): Map<string, KRRenderModuleExportCreator> {
    return new Map();
  }
}
