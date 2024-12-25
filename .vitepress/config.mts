import { defineConfig } from 'vitepress'

export default defineConfig({
  title: "HELLO",
  description: "This is where the story begins",
  srcDir:"docs",
  themeConfig: {
    socialLinks: [
      { icon: 'github', link: 'https://github.com/fcbyk/hello-world' }
    ]
  }
})
