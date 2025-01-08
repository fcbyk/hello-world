import { DefaultTheme } from "vitepress";

export default [
    {
        text:"coding",
        items:[
            {
                text:"前端",
                link:"/frontend/"
            },
            {
                text:"后端",
                link:"/backend/c"
            }
        ]
    },
    {
        text:"408",
        items:[
            {
                text:"计算机网络",
                link:"."
            },
            {
                text:"计算机组成原理",
                link:"."
            },
            {
                text:"操作系统",
                link:"/os/"
            },
            {
                text:"数据结构",
                link:"."
            },
        ]
    }
] as DefaultTheme.NavItem[]