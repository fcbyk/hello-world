<script setup>
import { ref } from "vue";
let dialog = ref(false);
defineProps(["history"]);
</script>

<template>
  <div class="btn">
    <v-btn size="small" variant="tonal" rounded="xl" @click="dialog = true"
      >发展历史</v-btn
    >

    <v-dialog v-model="dialog" width="auto">
      <v-card max-width="800">
        <template #text>
          <v-timeline side="end">
            <v-timeline-item v-for="item in history" size="small" >
              <template #opposite>
                {{ item.date }}
              </template>
              <div>
                <h2>{{ item.title }}</h2>
                <p>{{ item.description }}</p>
              </div>
            </v-timeline-item>
          </v-timeline>
        </template>
        <template #actions>
          <v-btn class="ms-auto" text="返回" @click="dialog = false"></v-btn>
        </template>
      </v-card>
    </v-dialog>
  </div>
</template>

<style scoped>
.btn {
  margin: 10px 5px;
}
</style>
