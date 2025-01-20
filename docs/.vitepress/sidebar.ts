import { DefaultTheme } from "vitepress";
import index from "../sidebar"
import server from "../server/sidebar"
import web from "../web/sidebar"
import os from "../os/sidebar"
import build from "../build/sidebar"
import data from "../data/sidebar"

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