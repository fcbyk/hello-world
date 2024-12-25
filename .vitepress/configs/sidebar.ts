import { DefaultTheme } from "vitepress";
import index from "../../docs/sidebar"
import backend from "../../docs/backend/sidebar"

export default {
    "/":index,
    "/backend/":[
        {
            text:"后端",
            base:"/backend/",
            items:backend
        }
    ]
} as DefaultTheme.Sidebar