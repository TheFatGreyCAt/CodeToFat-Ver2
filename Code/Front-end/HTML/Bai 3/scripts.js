function menuCreate(n)
{
    document.write('<div class="nav-bar">');
    for(let i=1;i<=n;i++)
    {
        document.write('<div class="menu1-item">' + 'Menu' + i + '<div class="dropdown-menu1">');
        for(let j=1;j<=n;j++)
        {
            document.write('<div class="menu2-item">' + 'Submenu ' + i + '.' + j + '<div class="dropdown-menu2">');
            for(let z=1;z<=n;z++)
            {
                document.write('<div class="menu3-item">' + 'Submenu ' + i + '.' + j + '.' + z + '</div>');
            }
            document.write('</div>' + '</div>');
        }
        document.write('</div>' + '</div>');
    }
    document.write('</div>');
}

let n = 10;
menuCreate(n);

