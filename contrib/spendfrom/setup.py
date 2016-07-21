from distutils.core import setup
setup(name='B8Mspendfrom',
      version='1.0',
      description='Command-line utility for bitcoin8m "coin control"',
      author='Gavin Andresen',
      author_email='gavin@bitcoin8mfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
