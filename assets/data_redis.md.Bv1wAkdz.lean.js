import{_ as i,c as a,a0 as n,o as h}from"./chunks/framework.BOM1ST4q.js";const g=JSON.parse('{"title":"Redis","description":"","frontmatter":{},"headers":[],"relativePath":"data/redis.md","filePath":"data/redis.md"}'),l={name:"data/redis.md"};function e(t,s,p,k,F,d){return h(),a("div",null,s[0]||(s[0]=[n(`<h1 id="redis" tabindex="-1">Redis <a class="header-anchor" href="#redis" aria-label="Permalink to &quot;Redis&quot;">​</a></h1><h3 id="string" tabindex="-1">String <a class="header-anchor" href="#string" aria-label="Permalink to &quot;String&quot;">​</a></h3><div class="language-sh vp-adaptive-theme"><button title="Copy Code" class="copy"></button><span class="lang">sh</span><pre class="shiki shiki-themes github-light github-dark vp-code" tabindex="0"><code><span class="line"><span style="--shiki-light:#005CC5;--shiki-dark:#79B8FF;">set</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> hello</span><span style="--shiki-light:#005CC5;--shiki-dark:#79B8FF;"> 123456</span></span>
<span class="line"><span style="--shiki-light:#6F42C1;--shiki-dark:#B392F0;">get</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> hello</span></span>
<span class="line"><span style="--shiki-light:#6F42C1;--shiki-dark:#B392F0;">del</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> hello</span></span>
<span class="line"></span>
<span class="line"><span style="--shiki-light:#6F42C1;--shiki-dark:#B392F0;">mset</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> key1</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> value1</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> key2</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> value2</span></span>
<span class="line"><span style="--shiki-light:#6F42C1;--shiki-dark:#B392F0;">mget</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> key1</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> key2</span></span>
<span class="line"></span>
<span class="line"><span style="--shiki-light:#6F42C1;--shiki-dark:#B392F0;">setnx</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> hello</span><span style="--shiki-light:#005CC5;--shiki-dark:#79B8FF;"> 22323</span></span>
<span class="line"><span style="--shiki-light:#6F42C1;--shiki-dark:#B392F0;">setex</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> mykey</span><span style="--shiki-light:#005CC5;--shiki-dark:#79B8FF;"> 60</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> redis</span></span></code></pre></div><h3 id="hash" tabindex="-1">Hash <a class="header-anchor" href="#hash" aria-label="Permalink to &quot;Hash&quot;">​</a></h3><div class="language-sh vp-adaptive-theme"><button title="Copy Code" class="copy"></button><span class="lang">sh</span><pre class="shiki shiki-themes github-light github-dark vp-code" tabindex="0"><code><span class="line"><span style="--shiki-light:#6F42C1;--shiki-dark:#B392F0;">hset</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> myhash</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> field1</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> &quot;Hello&quot;</span></span>
<span class="line"><span style="--shiki-light:#6F42C1;--shiki-dark:#B392F0;">hget</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> myhash</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> field1</span></span>
<span class="line"></span>
<span class="line"><span style="--shiki-light:#6F42C1;--shiki-dark:#B392F0;">hmset</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> myhash</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> field1</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> &quot;Hello&quot;</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> field2</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> &quot;World&quot;</span></span>
<span class="line"><span style="--shiki-light:#6F42C1;--shiki-dark:#B392F0;">hmget</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> myhash</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> field1</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> field2</span></span>
<span class="line"></span>
<span class="line"><span style="--shiki-light:#6F42C1;--shiki-dark:#B392F0;">HLEN</span><span style="--shiki-light:#032F62;--shiki-dark:#9ECBFF;"> myhash</span></span></code></pre></div>`,5)]))}const o=i(l,[["render",e]]);export{g as __pageData,o as default};
