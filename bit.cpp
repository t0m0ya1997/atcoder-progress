//ビット bit に i 番目のフラグが立っているかどうか
    if (bit & (1<<i))
//ビット bit に i 番目のフラグが消えているかどうか
if (!(bit & (1<<i)))
//ビット bit に i 番目のフラグを立てる
bit｜= (1<<i)
//ビット bit に i 番目のフラグを消す
bit &= ~(1<<i)
//ビット bit に何個のフラグが立っているか
__builtin_popcount(bit)
//ビット bit に i 番目のフラグを立てたもの
bit｜(1<<i)
//ビット bit に i 番目のフラグを消したもの
bit & ~(1<<i)

//bit全探索
for (int bit = 0; bit < (1<<n); ++bit)
    {
        /* bit で表される集合の処理を書く */

    }
