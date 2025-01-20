import DefaultTheme from "vitepress/theme";
import type { EnhanceAppContext } from "vitepress";
import HistoryDialog from "./../components/HistoryDialog.vue";
import LinkBtn from "./../components/LinkBtn.vue";

export default {
  ...DefaultTheme,
  enhanceApp({ app }:EnhanceAppContext) {
    app.component("HistoryDialog", HistoryDialog);
    app.component("LinkBtn", LinkBtn);
  },
};
