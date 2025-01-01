<script setup>
import ProvideInject from './ProvideInject.vue';
// 数组写法
// defineProps(["dataA","dataB"])

const props = defineProps({
    dataA: String,
    dataB: Object
})

console.log(props)
</script>

<template>
    <p>{{ dataA }}</p>
    <p>{{ dataB.description }}</p>
    <ProvideInject/>
</template>