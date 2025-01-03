import DefaultTheme from "vitepress/theme";
import "vuetify/styles";
import * as components from "vuetify/components";
import * as directives from "vuetify/directives";
import { createVuetify } from "vuetify";
import HistoryDialog from "./../components/HistoryDialog.vue";

const vuetify = createVuetify({
  components,
  directives
});

export default {
  ...DefaultTheme,
  enhanceApp({ app }) {
    app.use(vuetify);
    app.component("HistoryDialog", HistoryDialog);
  },
};
