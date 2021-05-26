function cyears (form){

    form.dogage.value=form.myage.value*7
}
function alert_output(text)
{

    window.alert(text);
}

function cal_age(form){


    if(form.current_year.value<form.birth_year.value)
    {
        alert_output("Invalid Input!!! TRY AGAIN");
        form.current_year.value = ""
        form.birth_year.value = ""
    }
    else
    {

        form.age.value= form.current_year.value - form.birth_year.value;
    }
}


function length_of_string(form)
{
    var a;
    a=form.string.length;
    form.length.value = a;
}