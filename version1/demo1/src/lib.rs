
// 生成的 bindings 代码根据 C/C++ 代码生成，里面有一些不符合 Rust 约定，我们不让编译期报警
// #![allow(non_upper_case_globals)]
// #![allow(non_camel_case_types)]
// #![allow(non_snake_case)]
// #![allow(deref_nullptr)]

extern crate libc;
// 这个加不加都行，都能链接到。但是如果加了，build.rs中就要写了cc代码了，不写就有问题。但是反过来 build.rs可以写cc代码，没要求这个宏一定要加。
// #[link(name = "a1",kind = "static")]
extern "C" {
    pub fn say_hello();
}

pub fn my_say_hello(){
    unsafe{
        say_hello();
    }
}

// cbindgen --config cbindgen.toml --output my_header.h
// 使用 no_mangle 禁止函数名改编，这样其它语言可以通过 C ABI 调用这个函数
#[no_mangle]
pub extern "C" fn print() {
    println!("is different");
    my_say_hello();
}




