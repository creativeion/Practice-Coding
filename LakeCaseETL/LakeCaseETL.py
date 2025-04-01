import sys
from awsglue.transforms import *
from awsglue.utils import getResolvedOptions
from pyspark.context import SparkContext
from awsglue.context import GlueContext
from awsglue.job import Job

## @params: [JOB_NAME]
args = getResolvedOptions(sys.argv, ['JOB_NAME'])

sc = SparkContext()
glueContext = GlueContext(sc)
spark = glueContext.spark_session
job = Job(glueContext)
job.init(args['JOB_NAME'], args)

spark.sql("""select * from lakecasedatabase.folder2 limit 10""").show()
  
dyf = glueContext.create_dynamic_frame.from_catalog(database='lakecasedatabase', table_name='folder2')
dyf.printSchema()
df = dyf.toDF()
df.show()

job.commit()