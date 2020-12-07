dx = [1, 0, -1, 0]
dy = [0, -1, 0, 1]

H, W = map(int, input().split())
c = [input() for _ in range(H)]

for i in range(H):
  for j in range(W):
    if c[i][j] == 's':
      s = (i, j)
    elif c[i][j] == 'g':
      g = (i, j)

# 1. 一度でも到達したかを管理するフラグ
flag_visited = [[False for j in range(W)] for i in range(H)]

# 2. 新たに到達した点を入れていく [(i0, j0), (i1, j1), ... ]
flag_visited[s[0]][s[1]] = True
newly_visited = [s]

# 3. 2が空になるまでループする
while len(newly_visited) > 0:
  # newly_visited から 1 つ取り出す（nowとする）
  now = newly_visited.pop(0)
  # print(now) でデバッグ
  # now から新たに到達可能な点を調べて，newly_visitedに突っ込む
  for i in range(4):
    new = (now[0] + dy[i], now[1] + dx[i])
    # 場外判定
    if not (0 <= new[0] < H and 0 <= new[1] < W): continue
    # 壁判定
    if c[new[0]][new[1]] == '#': continue
    # トラップ：過去に到達済みか判定
    if flag_visited[new[0]][new[1]]: continue
    
    flag_visited[new[0]][new[1]] = True
    newly_visited.append(new)

print("Yes" if flag_visited[g[0]][g[1]] else "No")
