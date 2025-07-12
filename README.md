# Mosaic

![Static Badge](https://img.shields.io/badge/Built_in-Rust-orange?logo=rust) \
![Static Badge](https://img.shields.io/badge/License-Apache_2.0-red)


**Mosaic** is a modern, developer-friendly 2D game engine, intended to make 2D game development smooth and easy.

This engine is inspired by similar projects, such as Pyxel, Pico-8, Raylib, Love2D, among others. 

Much like those mentioned inspirations, there isn't any dedicated suite of tools you can use to develop games. All of the *magic* happens inside your IDE.

## Features

> [!IMPORTANT]
> Returning to this when features are functionally implemented.

## Example Script

> [!NOTE]
> **Ruby** is the default scripting language in code samples. However the logic applies across programming languages.

```rb
require 'fiddle'

lib = Fiddle.dlopen('./mosaic.dll')
init = Fiddle::Function.new(lib['mosaic_init'], [], Fiddle::TYPE_VOID)
init.call
```

---

## Building and Using Mosaic

Mosaic is released as libraries and shared objects for Windows, Linux, and MacOS respectively. Alongside the required files for linking and use, there are the *docs!* Docs are provided for offline reference, but are stable to that specific release. There is also a [website for online docs]() which is *unstable* by nature, since it updates on every commit to the repository. 

## Found an Issue?

Issues are good, means there is work to be done! If you find an issue, maybe bad docs, maybe a function that works weirdly. Whatever you find, tell us *what* broke, and *how* you made it break, and we'll get to work fixing it!

Or, you can **fix it yourself by contributing to the repository!**