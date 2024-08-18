// #include <cstddef>
// #include <cstdio>
// #include <curl/curl.h>
// #include <curl/easy.h>
// #include <iostream>
// #include <ostream>
// #include <string>

// void boo() { std::cout << "Hello MotherFuckers" << std::endl; }

// void print(std::string &message) { std::cout << message << std::endl; }

// int httpREQUEST() {
//   CURL *curl;
//   CURLcode result;
//   char link[100];

//   std::cout << "Enter a Link ";
//   std::cin >> link;
//   curl = curl_easy_init();
//   if (curl == NULL) {
//     return -1;
//   }

//   curl_easy_setopt(curl, CURLOPT_URL, link);

//   result = curl_easy_perform(curl);

//   if (result != CURLE_OK) {
//     std::cout << "Failed" << stderr << std::endl;
//   }

//   curl_easy_cleanup(curl);
//   return 0;
// }
