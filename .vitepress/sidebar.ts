import { DefaultTheme } from "vitepress";
import index from "../docs/sidebar"
import server from "../docs/server/sidebar"
import web from "../docs/web/sidebar"
import os from "../docs/os/sidebar"
import build from "../docs/build/sidebar"
import data from "../docs/data/sidebar"

export default {
    "/":index,
    "/server/":[
        {
            text:"后端",
            base:"/server/",
            items:server
        }
    ],
    "/web/":[
        {
            text:"WEB前端",
            base:"/web/",
            items:web
        }
    ],
    "/os/":[
        {
            text:"操作系统",
            base:"/os/",
            items:os
        }
    ],
    "/build/":[
        {
            text:"构建工具",
            base:"/build/",
            items:build
        }
    ],
    "/data/":[
        {
            text:"数据",
            base:"/data/",
            items:data
        }
    ]
} as DefaultTheme.Sidebar