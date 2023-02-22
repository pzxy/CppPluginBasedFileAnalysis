pub fn add(left: usize, right: usize) -> usize {
    left + right
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works() {
        let result = add(2, 2);
        assert_eq!(result, 4);
    }
}


// cbindgen --config cbindgen.toml --output my_header.h
// 使用 no_mangle 禁止函数名改编，这样其它语言可以通过 C ABI 调用这个函数
#[no_mangle]
pub extern "C" fn print() {
    println!("is different");
}
