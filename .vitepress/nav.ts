import { DefaultTheme } from "vitepress";

export default [
    {
        text:"code",
        items:[
            {
                text:"web",
                link:"/web/"
            },
            {
                text:"服务器",
                link:"/server/"
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
    },
    {
        text:"tools",
        items:[
            {
                text:"构建",
                link:"/build/"
            }
        ]
    },
] as DefaultTheme.NavItem[]