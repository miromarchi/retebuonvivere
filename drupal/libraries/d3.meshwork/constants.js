console.log("loading constants.js");
var meshwork_mesiVisualizzati=18;
var meshwork_graphStartDate=new Date(new Date().getTime()-meshwork_mesiVisualizzati*30*24*60*60*1000);  

var meshwork_width,
    meshwork_height;
    
var meshwork_axisHeight=30;
var meshwork_margin = 10;

var meshwork_circleRadius=4;

var meshwork_textWidth=200;

var meshwork_nodeMinimumDays=10;

var meshwork_nodesMinimumPixelDistance=20;
var meshwork_nodesMinimumPixelDistanceBackLash=0.4;

var meshwork_unclickAlpha=0.006;
var meshwork_unclickFriction=0.1;

var meshwork_fullscreenPanel="meshworkDiv";

function meshwork_panelContentGenerator(node,neighbours,edges)
{
	var html;
	var title = node.name;
	    
    var type;
    if (node.nodeType=="org-neverStarted"||node.nodeType=="org")
        type = "organizzazione..";
    if (node.nodeType=="project")
        type="progetto/attività";
    if (node.orgType!="N")
        type = node.orgType;
	
	var mesi = ["gen", "feb", "mar", "apr", "mag", "giu", "lug", "ago", "set", "ott", "nov", "dic"];
    var startDateObj = new Date(node.start);
    var startDate;
    if (node.nodeType != "org-neverStarted"){
        startDate = startDateObj.getDate()+' '+mesi[startDateObj.getMonth()]+' '+startDateObj.getFullYear();
        } else {
            startDate = "data mancante;";
        }
    var endDateObj = new Date(node.end);
    if (node.end != null){
        var endDate = endDateObj.getDate()+' '+mesi[endDateObj.getMonth()]+' '+endDateObj.getFullYear();
    }

    function neighboursHtmlList(node,edges){
        var output = [];
        var dead = "";
        var edgeUrl = "";
        var iconClass = "";
        for (var j=0;j<edges.length;j++){
            var edge = edges[j];
            var neighbour;
            edgeUrl = edge.url;
            iconClass = "fa-long-arrow-right";
            if (node.id == edge.source.id){
                neighbour = edge.target;
            }
            if (node.id == edge.target.id){
                neighbour = edge.source;
            }
            if (edge.type == "end") {
                dead = "<strong>|</strong>";
                continue;
            }
            var neighbourTpl = '<li><a href="'+neighbour.url+'" title="Vai alla scheda di '+neighbour.name+'">'+neighbour.name+' </a>'+
                               '<a href="'+edgeUrl+'" title="Vedi la collaborazione tra '+node.name+'e '+neighbour.name+'"><i class="fa '+iconClass+'"></i>'+dead+'</a></li>';
            output.push(neighbourTpl);
        }
        return output.join('');
    }    
    
    html='<h3>'+title+'</h3>'+
        '<p>'+type+'</p>'+
        '<p><a href="'+node.url+'" class="btn btn-primary">Vai alla scheda</a></p>'+
        '<p><span class="date-display-start">'+startDate+' ';
        if(node.end != null){ html+='<span class="date-display-end">'+endDate+'</p>'; }
        if(node.categories!="N"){ html+='<p><strong>Settori</strong>: '+node.categories+'...</p>'; }
    html+='<h4>Collaborazioni:</h4>'+
        '<ul>'+neighboursHtmlList(node, edges)+'</ul>';
    
	return html;      					
}
