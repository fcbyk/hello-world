import { DefaultTheme } from "vitepress";

export default [
    {
        text:"C语言",
        link:"c"
    },
    {
        text:"C++",
        link:"cpp"
    },
    {
        text:"Java",
        link:"java",
        items: [
            {
              text: "MyBaits",
              link: "mybaits",
            },
            {
              text: "Spring",
              link: "spring",
            }
        ]
    }
] as DefaultTheme.SidebarItem[]