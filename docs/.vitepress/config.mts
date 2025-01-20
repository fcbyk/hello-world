import { defineConfig } from 'vitepress'
import sidebar from './sidebar'
import nav from './nav'

export default defineConfig({
  title: "HELLO",
  description: "This is where the story begins",
  head: [['link', { rel: 'icon', type:"image/svg+xml",href: '/favicon.svg' }]],
  cleanUrls:true,
  themeConfig: {
    logo: '/favicon.svg',
    socialLinks: [
      { icon: 'github', link: 'https://github.com/fcbyk/hello-world' }
    ],
    outline:[2,3],
    sidebar,
    nav,
  }
})
