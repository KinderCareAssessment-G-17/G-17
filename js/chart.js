$(function() {
  $.ajax({
    url: "http://localhost/kindercareassessment/chartdata.php",
    type: "GET",
    success: function(data) {
      chartData = data;
      var chartProperties = {
        caption: "REPORT",
        xAxisName: "Assignment",
        yAxisName: "Average score",
        rotatevalues: "1",
        theme: "zune"
      };
      apiChart = new FusionCharts({
        type: "column2d",
        renderAt: "chart-container",
        width: "550",
        height: "350",
        dataFormat: "json",
        dataSource: {
          chart: chartProperties,
          data: chartData
        }
      });
      apiChart.render();
    }
  });
});
