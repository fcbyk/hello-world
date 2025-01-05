<script setup>
import { ref } from "vue";

const props = defineProps({
  history: {
    type: Array,
    required: true,
  },
});

let index = ref(0);

function increment() {
  if (index.value < props.history.length - 1) index.value++;
  else index.value = 0;
}

function decrement() {
  if (index.value > 0) index.value--;
  else index.value = props.history.length - 1;
}
</script>

<template>
  <p>
    <span @click="decrement" class="btn"><-</span>
    <span class="date">{{ props.history[index].date }}</span>
    <span @click="increment" class="btn">-></span>
  </p>
  <p class="title">{{ props.history[index].title }}</p>
  <p class="description">{{ props.history[index].description }}</p>
</template>

<style lang="scss" scoped>
span {
  font-size: 1.5rem;
  font-weight: bold;
  font-style: italic;
  user-select: none
}

.date {
  margin: 0 10px;
  font-size: 1.7rem;
}

.btn {
  cursor: pointer;
}

.title {
  font-size: 1.1rem;
  font-weight: bold;
  color: rgb(0, 122, 229)
}
</style>
