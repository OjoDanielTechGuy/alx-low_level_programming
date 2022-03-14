set tabstop=8 shiftwidth=8
set autoindent
set smartindent
set cindent
syntax enable
set number
autocmd BufWritePre *.c %s/\s\+$//e
