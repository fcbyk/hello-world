import { defineConfig } from 'vitepress'
import sidebar from './configs/sidebar'

export default defineConfig({
  title: "HELLO",
  description: "This is where the story begins",
  srcDir:"docs",
  cleanUrls:true,
  themeConfig: {
    socialLinks: [
      { icon: 'github', link: 'https://github.com/fcbyk/hello-world' }
    ],
    outline:[2,3],
    sidebar,
  }
})
