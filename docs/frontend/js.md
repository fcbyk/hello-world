<script setup>
import history from './../../.vitepress/data/js'
</script>

# JavaScript

## 发展历史
<HistoryDialog :history/>

## 模块化
- 最初的脚本文件（1990年代中期）
- IIFE（1999年及以后）
- CommonJS（2009年，Node.js)
- AMD（Asynchronous Module Definition）（2010年左右）
- ES6模块（2015年）

## ECS API
> JavaScript 语言核心功能，由 ECMAScript 规范定义的 API

## 浏览器 API
<LinkBtn url="https://developer.mozilla.org/zh-CN/docs/Web/API">mdn文档</LinkBtn>
<LinkBtn url="https://www.yuque.com/u21195183/zr3z4r/imun20">别人的AJAX笔记</LinkBtn>

> 由浏览器提供的环境特定 API，涵盖 DOM 操作、网络请求等。

> 浏览器 API（Web API）的标准通常由 W3C（World Wide Web Consortium，万维网联盟）和 WHATWG（Web Hypertext Application Technology Working Group，Web 超文本应用技术工作组）等组织共同定义和维护。它们负责制定和推动 Web 技术和标准的发展。
### BOM
**BOM（Browser Object Model）**，即 **浏览器对象模型**，是浏览器提供的一组 API，用于操作浏览器窗口和浏览器提供的环境对象。BOM 允许开发者通过 JavaScript 与浏览器环境进行交互，控制浏览器的行为和与页面以外的环境进行交互（如处理 URL、历史记录、设备信息等）。

BOM 主要涉及的是 **浏览器的非页面部分**，即页面以外的功能，例如浏览器窗口、历史记录、导航、定时器等。它并不直接涉及页面内容的操作，这部分功能通常由 **DOM（文档对象模型）** 提供。

- **`window` 是顶级对象**：所有其他 BOM 对象（如 `location`、`navigator`、`history` 等）都是 `window` 的属性或子对象。
- 可以省略 `window.` 前缀，直接使用 `location`、`navigator` 等对象和方法，因为它们默认是 `window` 的子对象。
```ts
interface Window extends EventTarget {
  // 一些基本属性和方法
  alert(message?: string): void;
  confirm(message?: string): boolean;
  open(url?: string, windowName?: string, windowFeatures?: string): Window | null;
  close(): void;
  // 常见的 BOM 对象
  location: Location;
  navigator: Navigator;
  history: History;
  screen: Screen;
  performance: Performance;
  console: Console;
  // etc.
}
```
### DOM
> `window.document` 和 `document` 是等效的，因为 `document` 是 `window` 的默认属性

**DOM（文档对象模型）** 是一种表示和操作 HTML 或 XML 文档的标准接口，

DOM 将整个文档表示为一个树形结构，每个元素、文本、属性等都是树中的一个节点。树的根节点通常是 `document`，其子节点是 `<html>`、`<body>` 等标签元素。每个标签元素又可以有自己的子节点，这些节点可以是元素节点、文本节点、属性节点等。

在 DOM 中，所有的 HTML 元素、文本、属性都是“节点”。这些节点可以分为以下几种类型：

- **元素节点（Element Node）**：表示 HTML 或 XML 元素，例如 `<div>`、`<p>`、`<span>`。
- **文本节点（Text Node）**：表示元素内的文本内容，例如 `Hello World`。
- **属性节点（Attribute Node）**：表示 HTML 元素的属性，例如 `id="my-id"`、`class="container"`。
- **注释节点（Comment Node）**：表示 HTML 注释，例如 `<!-- This is a comment -->`。

节点之间可以通过父节点、子节点和兄弟节点来关联和操作。

## 服务器 API
> 由服务器端环境（如 Node.js）提供的 API，涉及文件系统、网络通信、加密等