# Cipher Techniques

Cipher techniques are broadly classified into two types:

1. **Classical Ciphers**  
2. **Non-Classical Ciphers**

---

## Classical Ciphers

Classical ciphers include the following main types:

- **Substitution Ciphers:** Replace each element of the plaintext with another element.  
  Examples: Caesar cipher, Monoalphabetic cipher, Playfair cipher, Vigenère cipher, Hill cipher, etc.

- **Transposition Ciphers:** Rearrange the positions of the characters in the plaintext without changing the characters themselves.  
  Examples: Rail Fence cipher, Columnar transposition cipher, Scytale cipher, etc.

---

# Classical

## Substitution Ciphers

### Caesar Cipher

#### Algorithm (Short Summary):
1. Choose a key `k` representing the shift amount.  
2. For each letter in the plaintext, shift it forward by `k` places in the alphabet (wrapping around at 'Z').  
3. The resulting letters form the ciphertext.  
4. Decryption shifts letters backward by `k`.

---

### Monoalphabetic Cipher

#### Algorithm (Short Summary):
1. Create a substitution alphabet by permuting the normal alphabet.  
2. Replace each letter in the plaintext with the corresponding letter in the substitution alphabet.  
3. Decryption uses the inverse mapping.

---

### Playfair Cipher

#### Algorithm (Short Summary):
1. Generate a 5x5 key matrix using a keyword (combine I/J).  
2. Split plaintext into digraphs (pairs of two letters).  
3. For each digraph, apply rules:  
   - If letters are in the same row, replace each with the letter to its right (wrap around).  
   - If in the same column, replace each with the letter below it (wrap around).  
   - Otherwise, replace each letter with the letter in its row but in the column of the other letter.  
4. The resulting pairs form the ciphertext.

---

### Vigenère Cipher

#### Algorithm (Short Summary):
1. Choose a keyword, repeat it to match plaintext length.  
2. For each plaintext letter, shift it by the alphabetical index of the corresponding key letter.  
3. Wrap around the alphabet if necessary.  
4. Decryption subtracts the key letter’s value.

---

### Hill Cipher

#### Algorithm (Short Summary):
1. Choose an `n x n` invertible key matrix.  
2. Convert plaintext letters into numerical vectors of size `n`.  
3. Multiply each vector by the key matrix modulo 26.  
4. Convert the resulting vectors back to letters to get ciphertext.  
5. Decryption uses the inverse key matrix modulo 26.

---

## Transposition Ciphers

### Rail Fence Cipher

#### Algorithm (Short Summary):
1. Write the plaintext letters diagonally in a zigzag across `n` rails (rows).  
2. Read the letters row by row to form ciphertext.  
3. Decryption reconstructs the zigzag pattern.

---

### Columnar Transposition Cipher

#### Algorithm (Short Summary):
1. Write plaintext in rows under columns labeled with a keyword.  
2. Reorder columns alphabetically by the keyword.  
3. Read ciphertext column by column in new order.  
4. Decryption reverses this process.

---

### Scytale Cipher

#### Algorithm (Short Summary):
1. Wrap the plaintext around a rod of fixed diameter (key).  
2. Read the letters off the rod in rows to get ciphertext.  
3. Decryption requires the same rod diameter to unwrap.

---

# Non-Classical Ciphers

*(To be added later)*

---

Feel free to contribute by adding non-classical cipher techniques, detailed explanations, code implementations, and examples!

