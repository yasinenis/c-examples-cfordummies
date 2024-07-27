##### Whats that? 🌓

In this repository there is examples from c-for-dummies web site and these is my notes from these examples.

##### C language Syntax changes 🍂

```c
strcpy()->   strcpy_s() // sizeof() eklenecek
scanf()  ->   scanf_s()    // sizeof() eklenecek
ctime()  ->   ctime_s()    // err= ctime_s(buffer,sizeof(buffer),&tictoc)
localtime()-> localtime_s()// err= localtime( örnek , örnek )
```

##### File Operations 🧑🏻‍💻

```c
"r"
// dosya varsa dosyanın başını gösterir
// dosya yoksa hata verir
"w"
// Dosya varsa içeriği silinir
// Dosya yoksa oluşturulur
"a"
// Dosya varsa dosyanın sonu gösterilir
// Dosya yoksa oluşturulur
fwrite(&{what you write to file} , sizeof(int), how many , filepointer )
// dosyaya veri yazıyor ama binary türünde .
// problem olmaması adına dosyayı açarken wb ile açman iyi olur.
fread(&{ne okuyacaksın}, okuyacağın boyut, kaçtane, filepointer) 
// dosyadaki binary haldeki metni insan dilinde alır.
ftell(filepointer) 
// o an imleç nerede onu gösterir
rewind(filepointer)
// dosyanın başına döndürür imleci
fseek(filepointer, kaydırılacak miktar, hangi konum referansına göre)
// işaretçiyi belirli bir konuma taşımak
// konum referansı (SEEK_SET, SEEK_CUR, SEEK_END)
// SEEK_SET : dosyanın başında itibaren kaydırılacak
// SEEK_CUR : cursorun o an bulunduğu yerden itibaren kaydırılacak
// SEEK_END : dosyanın sonundan geriye doğru kaydırılır.(eksi değer alır)
```
