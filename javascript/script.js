const pincodeDatabase={

                    
       "110001": {
        "city": "Pune",
        "state": "Maharashtra",
        "country": "India"
    },

       "400001":{
        "city": "New York",
        "state": "New York",
        "country": "United States"
    },

     "560001": {
        "city": "London",
        "state": "England",
        "country": "United Kingdom"
    }
};

function getAddressByPincode(pincode,callback)
{

    setTimeout(()=>{

        const data=pincodeDatabase[pincode];
        if(data){

            callback(null,data);

        }
        else{
             callback("Sorry invalis pincode");
        }
    },500;
}

function handlePincodeImput(){

    const pincode=document.getElementById("pincode").value="";

    getAddressByPincode(pincode,function(error,data)
    {
       if(error){

        document.getElementById("city").value="";
        document.getElementById("state").value="";
        document.getElementById("country").value="";

       }
       else{

        document.getElementById("city").value=data.city;

        document.getElementById("state").valbue=data.state;

        docbument.geteElementById("country").value=data.country;
       }

    });
    
}
      




