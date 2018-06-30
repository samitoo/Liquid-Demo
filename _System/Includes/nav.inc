<!-----Utility Nav----->
<nav class="navbar navbar-expand navbar-light bg-light utilitynav">
    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#utilnav" aria-controls="utilnav" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span> </button>
    <div class="collapse navbar-collapse justify-content-end" id="navbarsExample02">
        <ul class="navbar-nav">
                    {% if globals.user.isLoggedIn == true -%}
                    <!-- Logged IN Link -->
            		<!-- Get the customers id and then secure zone page id --> 
                    {module_data resource="customers" subresource="securezones" resourceId="{{globals.user.entityId}}" version="v3" template="" collection="customerZones"}
                    <li class="nav-item"> <a class="nav-link" href="/Default.aspx?PageID={{customerZones.items[0].secureZone.landingPageId}}">{{globals.user.firstname}}'s Account</a> </li>
            		<li class="nav-item"> <a class="nav-link" href="/LogOutProcess.aspx">Logout</a> </li>
                    {% else -%}
                        <!-- Logged OUT Link -->
                        <li class="nav-item"> <a class="nav-link" href="/login">Login</a> </li>
                    {% endif -%}            
        </ul>
    </div>
    <a href="/Users/customer/ask_a_question"><button type="submit" class="btn btn-primary navbutton">Ask A Question!</button></a>
</nav>
<!-----MAIN Nav----->
<nav class="navbar navbar-expand-lg navbar-dark bgblue mainnav"> <a class="navbar-brand" href="/"><img alt="" src="/_assets/img/cpalogo1.png" class="headlogo"></a>
    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#mainnav" aria-controls="mainnav" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span> </button>
    <div class="collapse navbar-collapse justify-content-end" id="mainnav">
        <ul class="navbar-nav greennav">
            <li class="nav-item"> <a class="nav-link" href="/index.htm">Home</a> </li>
            <li class="nav-item"> <a class="nav-link" href="/about">About</a> </li>
            
            <li class="nav-item"> <a class="nav-link" href="/FAQ">FAQs</a> </li>
            <li class="nav-item"> <a class="nav-link" href="/for-cpas">For CPAs</a> </li>
            <li class="nav-item"> <a class="nav-link" href="/contact-us">Contact Us</a> </li>        
            
        </ul>
    </div>
</nav>