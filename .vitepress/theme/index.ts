import DefaultTheme from "vitepress/theme";
import type { EnhanceAppContext } from "vitepress";
import HistoryDialog from "./../components/HistoryDialog.vue";

export default {
  ...DefaultTheme,
  enhanceApp({ app }:EnhanceAppContext) {
    app.component("HistoryDialog", HistoryDialog);
  },
};
