
/*efeitor do titulo aprecer*/
function escrever(elemento) {
    const textoArray = elemento.innerHTML.split('');
    elemento.innerHTML = '';
    textoArray.forEach((letra, i) => {
      setTimeout(() => elemento.innerHTML += letra, 150 * i);
    });
  }
  const titulo = document.querySelector('h1');
  escrever(titulo);
  //Grafico. se colocar em outor arquivo ele n aparece
  var ctx=document.getElementsByClassName("line-chart");
  
  var myChart = new Chart(ctx, {
    type: 'line',
    data: {
        datasets: [{
            data: [20, 50, 100, 75, 25, 0,-1,-2,-5,-6],
            label: 'Left dataset',

            // This binds the dataset to the left y axis
            yAxisID: 'left-y-axis'
          // This binds the dataset to the right y axis
           
        }],
        labels: ['-2', '-1', '0', '1', '2', '3']
    },
    options: {
        scales: {
            yAxes: [{
                id: 'left-y-axis',
                type: 'linear',
                position: 'left'
            }, {
                id: 'right-y-axis',
                type: 'linear',
                position: 'right'
            }]
        }
    }
});