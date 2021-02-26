var x;
var click,click2,click3,click4, click5,click6,click7,click8;
var y;
click = false
clcik2 = false
click3 = false
click4 = false
click5 = false
click6 = false
click7 = false
click8 = false

function openME(y){
    if (y == 1)
    {
        if (click == false)
        {
            
            x = document.getElementById("res");
            x.className = "open"; 
            click = true

        }
        else
        {
        
            x = document.getElementById("res");
            x.className = "closed"
            click = false
        }
    }
    if (y == 2)
    {
        if (click2 == false)
        {
            x = document.getElementById("resp");
            x.className = "open";
            click2 = true
        }
        else
        {
            x = document.getElementById("resp");
            x.className = "closed";
            click2 = false
        }
    } 
    if(y == 3 )
    {
        if (click3 == false)
        {
            x = document.getElementById("respo");
            x.className = "open";
            click3 = true
        }
        else
        {
            x = document.getElementById("respo");
            x.className = "closed";
            click3 = false
        }
    }  
    if(y == 4 )
    {
        if (click4 == false)
        {
            x = document.getElementById("respos");
            x.className = "open";
            click4 = true
        }
        else
        {
            x = document.getElementById("respos");
            x.className = "closed";
            click4 = false
        }
    } 
    if(y == 5 )
    {
        if (click5 == false)
        {
            x = document.getElementById("respost");
            x.className = "open";
            click5 = true
        }
        else
        {
            x = document.getElementById("respost");
            x.className = "closed";
            click5 = false
        }
    } 
    if(y == 6 )
    {
        if (click6 == false)
        {
            x = document.getElementById("resposta");
            x.className = "open";
            click6 = true
        }
        else
        {
            x = document.getElementById("resposta");
            x.className = "closed";
            click6 = false
        }
    } 
    if(y == 7)
    {
        if(click7 == false)
        {
            x = document.getElementById("respostas");
            x.className = "open";
            click7 = true
        }
        else
        {
            x = document.getElementById("respostas");
            x.className = "closed";
            click7 = false
        }
    } 
    if(y == 8)
    {
        if(click8 == false)
        {
            x = document.getElementById("final");
            x.className = "open";
            click8 = true
        }
        else
        {
            x = document.getElementById("final");
            x.className = "closed";
            click8 = false
        }
    } 
}
