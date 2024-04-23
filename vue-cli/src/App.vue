<!-- 一个文件就是一个组件 -->
<!-- Vue 的单文件组件（Single File Component，SFC）是一种将组件的模板、脚本和样式封装在一个文件中的方式。它的文件扩展名通常是 .vue -->

<!-- 组件的模板部分 -->
<template>
  <div id="app">
    <img alt="Vue logo" src="./assets/logo.png">
    <HelloWorld msg="Welcome to Your Vue.js App"/>
  </div>
</template>

<!-- 组件的脚本部分 -->
<!-- 组件的脚本部分通过 export default 导出一个配置对象，这样 Vue 才能正确地解析和使用组件 -->
<script>
import HelloWorld from './components/HelloWorld.vue'

export default {
  name: 'App',
  components: {
    HelloWorld
  }
}
</script>

<!-- 组件的样式部分，可以使用 CSS、SCSS、LESS 等预处理器编写样式。 -->
<!-- 通过 scoped 属性，可以将样式限定在当前组件的范围内，避免样式污染。 -->
<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
