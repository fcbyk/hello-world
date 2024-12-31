<template>
  <div class="container">

    <!-- 具名插槽 -->
    <header>
      <slot name="header"></slot>
    </header>

    <!-- 默认插槽 -->
    <main>
      <slot></slot>
    </main>

    <!-- 带默认内容的插槽 -->
    <footer>
      <slot name="footer">
        <p>footer默认内容</p>
      </slot>
    </footer>
  </div>
</template>
