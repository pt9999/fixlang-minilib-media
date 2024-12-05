# `module Minilib.Media.Png`

PNG image I/O.

 How to use:
 1. Install PNG library. For example, run the command below.
    `$ sudo apt install libpng-dev`
 2. Add `-d png` option to `fix run` and `fix build` arguments.

NOTE: Currently only writing is supported. Reading is not supported yet.

# Types and aliases

## `namespace Minilib.Media.Png`

### `type PngImageIO = unbox struct { ...fields... }`

#### field `dtor : Std::FFI::Destructor Std::Ptr`

# Traits and aliases

# Trait implementations

# Values

## `namespace Minilib.Media.Png`

### `_to_png_imageio : Minilib.Media.Image::Image -> Std::IO::IOFail Minilib.Media.Png::PngImageIO`

### `write_png_file : Std::String -> Minilib.Media.Image::Image -> Std::IO::IOFail ()`

### `write_png_to_memory : Minilib.Media.Image::Image -> Std::IO::IOFail (Std::Array Std::U8)`

## `namespace Minilib.Media.Png::PngImageIO`

### `@dtor : Minilib.Media.Png::PngImageIO -> Std::FFI::Destructor Std::Ptr`

Retrieves the field `dtor` from a value of `PngImageIO`.

### `_PNG_FORMAT_FLAG_AFIRST : Std::I64`

### `_PNG_FORMAT_FLAG_ALPHA : Std::I64`

### `_PNG_FORMAT_FLAG_ASSOCIATED_ALPHA : Std::I64`

### `_PNG_FORMAT_FLAG_BGR : Std::I64`

### `_PNG_FORMAT_FLAG_COLOR : Std::I64`

### `_PNG_FORMAT_FLAG_COLORMAP : Std::I64`

### `_PNG_FORMAT_FLAG_LINEAR : Std::I64`

### `_check_warning_or_error : Std::String -> Std::I32 -> Minilib.Media.Png::PngImageIO -> Std::IO::IOFail ()`

### `act_dtor : [f : Std::Functor] (Std::FFI::Destructor Std::Ptr -> f (Std::FFI::Destructor Std::Ptr)) -> Minilib.Media.Png::PngImageIO -> f Minilib.Media.Png::PngImageIO`

Updates a value of `PngImageIO` by applying a functorial action to field `dtor`.

### `get_message : Minilib.Media.Png::PngImageIO -> Std::IO::IOFail Std::String`

### `get_warning_or_error : Minilib.Media.Png::PngImageIO -> Std::IO::IOFail Std::I64`

### `make : Std::IO::IOFail Minilib.Media.Png::PngImageIO`

### `mod_dtor : (Std::FFI::Destructor Std::Ptr -> Std::FFI::Destructor Std::Ptr) -> Minilib.Media.Png::PngImageIO -> Minilib.Media.Png::PngImageIO`

Updates a value of `PngImageIO` by applying a function to field `dtor`.

### `parse_format : Std::String -> Std::Result Std::String Std::I64`

### `set_dtor : Std::FFI::Destructor Std::Ptr -> Minilib.Media.Png::PngImageIO -> Minilib.Media.Png::PngImageIO`

Updates a value of `PngImageIO` by setting field `dtor` to a specified one.

### `set_format : Std::I64 -> Minilib.Media.Png::PngImageIO -> Std::IO::IOFail ()`

### `set_image_size : Std::I64 -> Std::I64 -> Minilib.Media.Png::PngImageIO -> Std::IO::IOFail ()`

### `write_to_file : Std::String -> Std::Bool -> Std::Array Std::U8 -> Std::I64 -> Minilib.Media.Png::PngImageIO -> Std::IO::IOFail ()`

### `write_to_memory : Std::Bool -> Std::Array Std::U8 -> Std::I64 -> Minilib.Media.Png::PngImageIO -> Std::IO::IOFail (Std::Array Std::U8)`