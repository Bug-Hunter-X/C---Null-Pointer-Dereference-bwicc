int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) { // Check for null pointer before dereferencing
    *ptr = 10;
  } else {
    std::cerr << "Error: Null pointer dereference avoided." << std::endl;
    return 1; // Or handle the error appropriately
  }
  return 0;
}