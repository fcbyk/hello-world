<script setup>
defineProps(["url", "text"]);
</script>

<template>
    <a :href="url" target="_blank">
        <slot>{{ text }}</slot>
    </a>
</template>

<style scoped>
a{
  display: inline;
  margin: 3px;
  padding: 4px;
  border: 1px solid  #a8a8a8;
  border-radius: 3px;
  text-decoration: none; 
  color: #515151;
  text-align: center; 
  font-size: small;
}
a:hover {
  color: #333333;
  border-color: #343434;
}
</style>