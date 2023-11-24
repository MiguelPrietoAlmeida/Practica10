/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date Nov 23th 2023
 * @brief El programa incluye una función que recibe una cadena de caracteres en formato std::string y genera 
 * un std::vector de enteros, sabiendo que cada elemento del vector contiene la diferencia entre el carácter correspondiente 
 * de la cadena y el carácter anterior (asumiendo un carácter ficticio inicial 0):
 */
#include <iostream>
#include <vector>
/**
 * This fuction reads a string and for each character of that string push its asiic code in a vector.
 * Then, it takes the diference between each element and the previous element, pushing that value in 
 * another vector and suposing for the first element that the value of the previousone is 0.
*/
std::vector<int> AsiicDiferences(std::string string) {
  std::vector<int> vector_asiic;
  for (char element : string) {
    int asiic{int (element)};
    vector_asiic.push_back(asiic);
  }
  std::vector<int> output_vector;
  int diference{0};
  for (size_t i{0}; i < vector_asiic.size(); ++i) {
    int element{vector_asiic[i] - diference};
    output_vector.push_back(element);
    diference = vector_asiic[i];
  }
  return output_vector;
}
//Main fuction of the program.
int main() {
  std::string string;
  std::cin >> string;
  std::vector<int> vector{AsiicDiferences(string)};
  std::cout << "[";
  for (size_t i{0}; i < vector.size() - 1; ++i) {
    std::cout << vector[i] << ", ";
  }
  std::cout << vector[vector.size() - 1] << "]" << std::endl;
  return 0;
}


