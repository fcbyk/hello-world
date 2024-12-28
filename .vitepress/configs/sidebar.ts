import { DefaultTheme } from "vitepress";
import index from "../../docs/sidebar"
import backend from "../../docs/backend/sidebar"
import friontend from "../../docs/frontend/sidebar"

export default {
    "/":index,
    "/backend/":[
        {
            text:"后端",
            base:"/backend/",
            items:backend
        }
    ],
    "/frontend/":[
        {
            text:"WEB前端",
            base:"/frontend/",
            items:friontend
        }
    ]
} as DefaultTheme.Sidebar