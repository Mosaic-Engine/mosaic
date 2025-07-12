# Mosaic Engine Architecture

```
.
  lib.rs         # Handles Rust->C ABI

  ./engine
    mod.rs       # Exposes mods to lib.rs
    graphics.rs  # Graphics backend
    audio.rs     # Sound system
    input.rs     # User inputs
    ...
```