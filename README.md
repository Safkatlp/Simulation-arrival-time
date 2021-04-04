# Simulation-arrival-time
In queuing problem ***arrival time*** is the **time when a customer came** to take service from a server.<br/> It is a program to calculate the arrival time of customers from random inter-arrival time for a simulation queing problem.<br/><br/>
To calculate the ***arrival time*** we need the ***inter-arrival*** time for each customer.<br/>
Here we used ***possion distribution*** to generate ***random no*** for the ***inter-arrival*** time.<br/>
The arrival time of a customer will be `***the sumation of the inter-arrival time of that customer and the arrival time of the previous customer***`.<br/>

The formula used to  calculate the arrival time of ***i***th customer is:<br/> 
`***arrival[i] = arrival[i-1] + inter_arrive[i]***`<br/>
