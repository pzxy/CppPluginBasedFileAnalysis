
fn main() {
    cc::Build::new()
        .cpp(true)
        .file("../a1.cpp")
        .compile("a1");

    println!("cargo:rustc-link-lib=a1");
}
