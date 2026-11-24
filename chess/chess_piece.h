/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Hdez. Aceituno
 * @date 17.dic.2024
 * @brief Cabecera de la clase ChessPiece
 */

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include <iostream>
#include <vector>

/** Clase enumerada de tipo de pieza: peón, torre, caballo, alfil, reina y rey
 * Por defecto, sus elementos tendrán valores ascendentes empezando en 0.
 * La constante kTotal simplificará la generación de valores aleatorios */
enum ChessType { kPawn, kRook, kKnight, kBishop, kQueen, kKing, KTotal };

/** Clase de representación de piezas de ajedrez */
class ChessPiece {
 public:
  ChessPiece();
  void RandomPosition();
  friend bool operator==(const ChessPiece& first, const ChessPiece& second);
  friend std::ostream& operator<<(std::ostream& out, const ChessPiece& piece);
 private:
  ChessType type_;
  bool is_white_;
  unsigned char row_, column_;
  std::string type() const;
  static constexpr unsigned char kBoardSize{8};
};

bool CheckOverlap(const std::vector<ChessPiece>& pieces);
bool operator==(const ChessPiece& first, const ChessPiece& second);
// Nada nos impide sobrecargar el operador << para clases compuestas:
std::ostream& operator<<(std::ostream& out, const std::vector<ChessPiece>&);

#endif

