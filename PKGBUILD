
pkgname=dwmfu
_pkgname=dwm
pkgver=6.1.f
pkgrel=2
pkgdesc="A dynamic window manager for X"
url="http://dwm.suckless.org"
arch=('i686' 'x86_64')
license=('MIT')
depends=('libx11' 'libxinerama')

provides=("${pkgname}")                                                                                    
conflicts=("${pkgname}")

build() {
  cd $pkgname
  make
}

package() {
  cd $pkgname
  make PREFIX=/usr/local DESTDIR=$pkgdir install
  install -m644 -D LICENSE $pkgdir/usr/local/share/licenses/$_pkgname/LICENSE
  install -m644 -D README $pkgdir/usr/local/share/doc/$_pkgname/README
}


