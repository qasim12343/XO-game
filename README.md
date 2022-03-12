# Final project (XO game)

![images](https://user-images.githubusercontent.com/93463121/158032636-de3e780a-3711-4c86-9f51-2d8fe506291d.jpg)

### What is `XO game` or `tic-tac-toe`?
>**Tic-tac-toe (American English), noughts and crosses (Commonwealth English), or Xs and Os (Irish English) is a paper-and-pencil game for two players who take turns marking the spaces in a three-by-three grid with X or O. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row is the winner. It is a solved game, with a forced draw assuming best play from both players..**

## Gameplay
Tic-tac-toe is played on a three-by-three grid by two players, who alternately place the marks X and O in one of the nine spaces in the grid.

In the following example, the first player (X) wins the game in seven steps:

Game of Tic-tac-toe, won by X
There is no universally-agreed rule as to who plays first, but in this article the convention that X plays first is used.

Players soon discover that the best play from both parties leads to a draw. Hence, tic-tac-toe is often played by young children who may not have discovered the optimal strategy.

Because of the simplicity of tic-tac-toe, it is often used as a pedagogical tool for teaching the concepts of good sportsmanship and the branch of artificial intelligence that deals with the searching of game trees. It is straightforward to write a computer program to play tic-tac-toe perfectly or to enumerate the 765 essentially different positions (the state space complexity) or the 26,830 possible games up to rotations and reflections (the game tree complexity) on this space.[1] If played optimally by both players, the game always ends in a draw, making tic-tac-toe a futile game.[2]


Incidence structure for tic-tac-toe
The game can be generalized to an m,n,k-game, in which two players alternate placing stones of their own color on an m-by-n board with the goal of getting k of their own color in a row. Tic-tac-toe is the 3,3,3-game.[3] Harary's generalized tic-tac-toe is an even broader generalization of tic-tac-toe. It can also be generalized as an nd game, specifically one in which n equals 3 and d equals 2.[4] It can be generalised even further by playing on an arbitrary incidence structure, where rows are lines and cells are points. Tic-tac-toe's incidence structure consists of nine points, three horizontal lines, three vertical lines, and two diagonal lines, with each line consisting of at least three points.

## Further details

**Consider a board with the nine positions numbered as follows:**

![XO further](https://user-images.githubusercontent.com/93463121/158032822-16b7f687-3522-45f7-a5f7-1042f58f90f3.jpg)

**When X plays 1 as their opening move, then O should take 5. Then X takes 9 (in this situation, O should not take 3 or 7, O should take 2, 4, 6 or 8):**

**X1 → O5 → X9 → O2 → X8 → O7 → X3 → O6 → X4, this game will be a draw.
or 6 (in this situation, O should not take 4 or 7, O should take 2, 3, 8 or 9. In fact, taking 9 is the best move, since a non-perfect player X may take 4, then O can take 7 to win).**

**X1 → O5 → X6 → O2 → X8, then O should not take 3, or X can take 7 to win, and O should not take 4, or X can take 9 to win, O should take 7 or 9.
X1 → O5 → X6 → O2 → X8 → O7 → X3 → O9 → X4, this game will be a draw.
X1 → O5 → X6 → O2 → X8 → O9 → X4 (7) → O7 (4) → X3, this game will be a draw.
X1 → O5 → X6 → O3 → X7 → O4 → X8 (9) → O9 (8) → X2, this game will be a draw.
X1 → O5 → X6 → O8 → X2 → O3 → X7 → O4 → X9, this game will be a draw.
X1 → O5 → X6 → O9, then X should not take 4, or O can take 7 to win, X should take 2, 3, 7 or 8.
X1 → O5 → X6 → O9 → X2 → O3 → X7 → O4 → X8, this game will be a draw.
X1 → O5 → X6 → O9 → X3 → O2 → X8 → O4 (7) → X7 (4), this game will be a draw.
X1 → O5 → X6 → O9 → X7 → O4 → X2 (3) → O3 (2) → X8, this game will be a draw.
X1 → O5 → X6 → O9 → X8 → O2 (3, 4, 7) → X4/7 (4/7, 2/3, 2/3) → O7/4 (7/4, 3/2, 3/2) → X3 (2, 7, 4), this game will be a draw.
In both of these situations (X takes 9 or 6 as second move), X has a 
1
/
3
 property to win.**

**If X is not a perfect player, X may take 2 or 3 as second move. Then this game will be a draw, X cannot win**.

**X1 → O5 → X2 → O3 → X7 → O4 → X6 → O8 (9) → X9 (8), this game will be a draw.
X1 → O5 → X3 → O2 → X8 → O4 (6) → X6 (4) → O9 (7) → X7 (9), this game will be a draw.
If X plays 1 opening move, and O is not a perfect player, the following may happen:**

**Although O takes the only good position (5) as first move, but O takes a bad position as second move:
**
**X1 → O5 → X9 → O3 → X7, then X can take 4 or 8 to win.
X1 → O5 → X6 → O4 → X3, then X can take 7 or 9 to win.
X1 → O5 → X6 → O7 → X3, then X can take 2 or 9 to win.
Although O takes good positions as the first two moves, but O takes a bad position as third move:**

**X1 → O5 → X6 → O2 → X8 → O3 → X7, then X can take 4 or 9 to win.
X1 → O5 → X6 → O2 → X8 → O4 → X9, then X can take 3 or 7 to win.
O takes a bad position as first move (except of 5, all other positions are bad):**

**X1 → O3 → X7 → O4 → X9, then X can take 5 or 8 to win.
X1 → O9 → X3 → O2 → X7, then X can take 4 or 5 to win.
X1 → O2 → X5 → O9 → X7, then X can take 3 or 4 to win.
X1 → O6 → X5 → O9 → X3, then X can take 2 or 7 to win.**

## Some English names

The game has various English names, including:

- Tick-tack-toe, tic-tac-toe, tick-tat-toe, or tit-tat-toe (United States, Canada).
- Noughts and crosses or naughts and crosses (United Kingdom, Republic of Ireland, Australia, New Zealand, South Africa, Zimbabwe, India).
- Sometimes, tic-tac-toe (where players keep adding "pieces") and three men's morris (where pieces start to move after a certain number have been placed) are confused with each other.

For more details click the link [tic tac toe](https://www.thesprucecrafts.com/tic-tac-toe-game-rules-412170).
