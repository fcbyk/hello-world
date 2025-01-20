declare module "*.vue" {
  import { DefineComponent } from "vue";
  const component: DefineComponent<{}, {}, any>;
  export default component;
}

declare type TimelineData = {
  date: string;
  title: string;
  description: string;
}[];
