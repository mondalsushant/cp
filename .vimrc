" SPDX-FileCopyrightText: (C) 2026 Sushant Mondal <contact@sushantmondal.com>
"
" Add `set exrc` and `set secure` @ `~/.vimrc` to use this VIM configuration.

augroup RemoveTrailingWhitespace
  autocmd!
  autocmd BufWritePre * keeppatterns %s/\s\+$//e
augroup END

" Indentation
set autoindent
set expandtab
set shiftwidth=2
set tabstop=2

" POSIX EoL/EoF
set colorcolumn=100
set endofline
set fixendofline
set textwidth=100

" QoL
colorscheme default
set background=light
set mouse=a
set number

syntax on
