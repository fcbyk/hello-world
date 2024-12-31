<script setup>
import { ref } from "vue";
import SlotsTest from "./SlotsTest.vue";

const count = ref(0);
</script>

<template>
  <button @click="count++">You clicked me {{ count }} times.</button>

  <SlotsTest>
    <!-- 注意这里是传给指令的arg，而不是value -->
    <template v-slot:header>
      <h1>Here might be a page title</h1>
    </template>

    <!-- 默认插槽显示写法 -->
    <template #default>
      <p>A paragraph for the main content.</p>
      <p>And another one.</p>
    </template>

    <!-- v-slot简写 -->
    <template #footer>
      <p>Here's some contact info</p>
    </template>
  </SlotsTest>

  <SlotsTest>
    <!-- header无内容，会渲染一个空元素 -->

    <!-- 隐式的默认插槽 -->
     <hr/>
    <p>A paragraph for the main content.</p>
    <p>And another one.</p>

    <!-- footer插槽无内容覆盖，会显示默认内容 -->
  </SlotsTest>
</template>
